# Spike vs DINO cosimulation

Run from Ubuntu/WSL at the repository root:

```bash
STEPS=80 JOBS=4 cosim/run_cosim.sh
```

To run a folder of generated tests:

```bash
STEPS=80 JOBS=4 cosim/run_cosim.sh path/to/generated_tests/
```

The runner finds every `.S`/`.s` file in the folder, keeps going across tests, writes per-test
JSON files under `cosim/build/results/<test_name>/result.json`, and writes one campaign JSON under
`cosim/build/campaigns/`.

Folder search is flat by default. If the generated tests are nested in subfolders, add
`RECURSIVE=1`.

For streaming comparison, use:

```bash
LIVE=1 STEPS=80 JOBS=4 cosim/run_cosim.sh
```

The runner:

1. Regenerates `SingleCycleCPUDebug` Verilog.
2. Builds a Verilator simulator with `--public-flat-rw`.
3. Assembles each `cosim/asm_tests/*.S` program for RV64I.
4. Runs DINO and Spike for the same instruction count.
5. Enables Spike's commit log with `--log-commits`.
6. Compares PC, instruction word, and all 32 registers after every instruction.

With `LIVE=1`, DINO and Spike are launched together and the comparator reads one DINO trace line
and one Spike commit-log line at a time. This is still not true paused lockstep: `spike` is an
external process and may run ahead. The comparator stops both processes at the first mismatch it
observes.

Programs are linked at `0x80000000`, and the DINO testbench sets the simulated PC to that same
base before the first instruction. This keeps `auipc`, jumps, and link-register behavior directly
comparable with Spike.
