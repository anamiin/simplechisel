#include "VSingleCycleCPU.h"
#include "VSingleCycleCPU___024root.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

static uint64_t get_reg(VSingleCycleCPU___024root* root, int idx) {
    switch (idx) {
    case 0: return root->SingleCycleCPU__DOT__registers__DOT__regs_0;
    case 1: return root->SingleCycleCPU__DOT__registers__DOT__regs_1;
    case 2: return root->SingleCycleCPU__DOT__registers__DOT__regs_2;
    case 3: return root->SingleCycleCPU__DOT__registers__DOT__regs_3;
    case 4: return root->SingleCycleCPU__DOT__registers__DOT__regs_4;
    case 5: return root->SingleCycleCPU__DOT__registers__DOT__regs_5;
    case 6: return root->SingleCycleCPU__DOT__registers__DOT__regs_6;
    case 7: return root->SingleCycleCPU__DOT__registers__DOT__regs_7;
    case 8: return root->SingleCycleCPU__DOT__registers__DOT__regs_8;
    case 9: return root->SingleCycleCPU__DOT__registers__DOT__regs_9;
    case 10: return root->SingleCycleCPU__DOT__registers__DOT__regs_10;
    case 11: return root->SingleCycleCPU__DOT__registers__DOT__regs_11;
    case 12: return root->SingleCycleCPU__DOT__registers__DOT__regs_12;
    case 13: return root->SingleCycleCPU__DOT__registers__DOT__regs_13;
    case 14: return root->SingleCycleCPU__DOT__registers__DOT__regs_14;
    case 15: return root->SingleCycleCPU__DOT__registers__DOT__regs_15;
    case 16: return root->SingleCycleCPU__DOT__registers__DOT__regs_16;
    case 17: return root->SingleCycleCPU__DOT__registers__DOT__regs_17;
    case 18: return root->SingleCycleCPU__DOT__registers__DOT__regs_18;
    case 19: return root->SingleCycleCPU__DOT__registers__DOT__regs_19;
    case 20: return root->SingleCycleCPU__DOT__registers__DOT__regs_20;
    case 21: return root->SingleCycleCPU__DOT__registers__DOT__regs_21;
    case 22: return root->SingleCycleCPU__DOT__registers__DOT__regs_22;
    case 23: return root->SingleCycleCPU__DOT__registers__DOT__regs_23;
    case 24: return root->SingleCycleCPU__DOT__registers__DOT__regs_24;
    case 25: return root->SingleCycleCPU__DOT__registers__DOT__regs_25;
    case 26: return root->SingleCycleCPU__DOT__registers__DOT__regs_26;
    case 27: return root->SingleCycleCPU__DOT__registers__DOT__regs_27;
    case 28: return root->SingleCycleCPU__DOT__registers__DOT__regs_28;
    case 29: return root->SingleCycleCPU__DOT__registers__DOT__regs_29;
    case 30: return root->SingleCycleCPU__DOT__registers__DOT__regs_30;
    default: return root->SingleCycleCPU__DOT__registers__DOT__regs_31;
    }
}

static void zero_regs(VSingleCycleCPU___024root* root) {
    root->SingleCycleCPU__DOT__registers__DOT__regs_0 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_1 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_2 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_3 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_4 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_5 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_6 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_7 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_8 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_9 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_10 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_11 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_12 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_13 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_14 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_15 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_16 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_17 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_18 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_19 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_20 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_21 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_22 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_23 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_24 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_25 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_26 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_27 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_28 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_29 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_30 = 0;
    root->SingleCycleCPU__DOT__registers__DOT__regs_31 = 0;
}

static std::vector<uint32_t> load_imem(const char* path) {
    std::ifstream in(path);
    if (!in) {
        std::fprintf(stderr, "failed to open instruction hex file: %s\n", path);
        std::exit(2);
    }

    std::vector<uint32_t> words;
    std::string line;
    while (std::getline(in, line)) {
        size_t comment = line.find('#');
        if (comment != std::string::npos) {
            line = line.substr(0, comment);
        }
        size_t first = line.find_first_not_of(" \t\r\n");
        if (first == std::string::npos) {
            continue;
        }
        size_t last = line.find_last_not_of(" \t\r\n");
        std::string token = line.substr(first, last - first + 1);
        char* end = nullptr;
        uint32_t word = static_cast<uint32_t>(std::strtoul(token.c_str(), &end, 16));
        if (end == token.c_str()) {
            std::fprintf(stderr, "bad instruction word in %s: %s\n", path, token.c_str());
            std::exit(2);
        }
        words.push_back(word);
    }

    if (words.empty()) {
        std::fprintf(stderr, "instruction hex file is empty: %s\n", path);
        std::exit(2);
    }
    return words;
}

class ByteMemory {
public:
    uint64_t load(uint64_t addr, uint8_t maskmode, bool sext) {
        const unsigned bytes = 1u << maskmode;
        uint64_t value = 0;
        for (unsigned i = 0; i < bytes; ++i) {
            value |= static_cast<uint64_t>(read_byte(addr + i)) << (8 * i);
        }

        if (sext && bytes < 8) {
            const unsigned bits = bytes * 8;
            const uint64_t sign_bit = 1ull << (bits - 1);
            if (value & sign_bit) {
                value |= (~0ull) << bits;
            }
        }
        return value;
    }

    void store(uint64_t addr, uint8_t maskmode, uint64_t value) {
        const unsigned bytes = 1u << maskmode;
        for (unsigned i = 0; i < bytes; ++i) {
            mem_[addr + i] = static_cast<uint8_t>((value >> (8 * i)) & 0xffu);
        }
    }

private:
    uint8_t read_byte(uint64_t addr) const {
        auto it = mem_.find(addr);
        return it == mem_.end() ? 0 : it->second;
    }

    std::unordered_map<uint64_t, uint8_t> mem_;
};

static void print_trace(uint64_t step, uint64_t pc, uint32_t instr,
                        VSingleCycleCPU___024root* root) {
    std::printf("step=%llu pc=0x%016llx instr=0x%08x",
                static_cast<unsigned long long>(step),
                static_cast<unsigned long long>(pc),
                instr);
    for (int i = 0; i < 32; ++i) {
        std::printf(" x%d=0x%016llx", i,
                    static_cast<unsigned long long>(get_reg(root, i)));
    }
    std::printf("\n");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 2 || argc > 4) {
        std::fprintf(stderr, "usage: %s imem.hex [steps] [pc_base]\n", argv[0]);
        return 2;
    }

    std::vector<uint32_t> imem = load_imem(argv[1]);
    const uint64_t steps = argc >= 3 ? std::strtoull(argv[2], nullptr, 0) : imem.size() + 8;
    const uint64_t pc_base = argc >= 4 ? std::strtoull(argv[3], nullptr, 0) : 0;

    VSingleCycleCPU* dut = new VSingleCycleCPU;
    auto* root = dut->rootp;
    ByteMemory dmem;

    dut->io_imem_good = 1;
    dut->io_imem_ready = 1;
    dut->io_dmem_good = 1;
    dut->io_dmem_readdata = 0;

    dut->reset = 1;
    for (int i = 0; i < 2; ++i) {
        dut->clock = 0;
        dut->eval();
        dut->clock = 1;
        dut->eval();
    }

    dut->reset = 0;
    dut->clock = 0;
    zero_regs(root);
    root->SingleCycleCPU__DOT__pc = pc_base;
    dut->eval();

    for (uint64_t step = 0; step < steps; ++step) {
        uint64_t pc = dut->io_imem_address;
        if (pc < pc_base || ((pc - pc_base) % 4) != 0) {
            std::fprintf(stderr, "bad fetch pc at step %llu: 0x%016llx\n",
                         static_cast<unsigned long long>(step),
                         static_cast<unsigned long long>(pc));
            delete dut;
            return 1;
        }

        uint64_t idx = (pc - pc_base) / 4;
        if (idx >= imem.size()) {
            std::fprintf(stderr, "fetch out of range at step %llu: pc=0x%016llx idx=%llu words=%zu\n",
                         static_cast<unsigned long long>(step),
                         static_cast<unsigned long long>(pc),
                         static_cast<unsigned long long>(idx),
                         imem.size());
            delete dut;
            return 1;
        }

        uint32_t instr = imem[static_cast<size_t>(idx)];
        uint64_t doubled_instr = (static_cast<uint64_t>(instr) << 32) | instr;
        dut->io_imem_instruction = doubled_instr;
        dut->io_dmem_readdata = 0;
        dut->eval();

        if (dut->io_dmem_valid && dut->io_dmem_memread) {
            dut->io_dmem_readdata = dmem.load(dut->io_dmem_address,
                                              dut->io_dmem_maskmode,
                                              dut->io_dmem_sext);
            dut->eval();
        }

        if (dut->io_dmem_valid && dut->io_dmem_memwrite) {
            dmem.store(dut->io_dmem_address,
                       dut->io_dmem_maskmode,
                       dut->io_dmem_writedata);
        }

        dut->clock = 1;
        dut->eval();
        dut->clock = 0;
        dut->eval();

        print_trace(step, pc, instr, root);
    }

    delete dut;
    return 0;
}
