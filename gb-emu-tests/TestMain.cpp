#include "stdafx.h"

#if !WINDOWS
#include <CPU.hpp>
#include "CPUTests.cpp"
#include "GPUTests.cpp"
#include "JoypadTests.cpp"
#include "MBCTests.cpp"

int main(int arg, char** argv)
{
    int passed = 0;
    int failed = 0;

    std::cout << "----------------------------------" << std::endl;
    TEST_SETUP(CPUTests);
    TEST_CALL(CPUTests, GetHighByte_Test);
    TEST_CALL(CPUTests, GetLowByte_Test);
    TEST_CALL(CPUTests, GetByteRegister_Test);
    TEST_CALL(CPUTests, GetUShortRegister_Test);
    TEST_CALL(CPUTests, NOP_Test);
    TEST_CALL(CPUTests, LDBe_Test);
    TEST_CALL(CPUTests, INCC_Test);
    TEST_CALL(CPUTests, LDCe_Test);
    TEST_CALL(CPUTests, LDDEnn_Test);
    TEST_CALL(CPUTests, LDA_DE__Test);
    TEST_CALL(CPUTests, JRNZe_Test);
    TEST_CALL(CPUTests, LDHLnn_Test);
    TEST_CALL(CPUTests, LDSPnn_Test);
    TEST_CALL(CPUTests, LDD_HL_A_Test);
    TEST_CALL(CPUTests, LDAe_Test);
    TEST_CALL(CPUTests, LDCA_Test);
    TEST_CALL(CPUTests, LD_HL_A_Test);
    TEST_CALL(CPUTests, XORA_Test);
    TEST_CALL(CPUTests, PUSHBC_Test);
    TEST_CALL(CPUTests, CALLnn_Test);
    TEST_CALL(CPUTests, LD_0xFF00n_A_Test);
    TEST_CALL(CPUTests, LD_0xFF00C_A_Test);
    TEST_CALL(CPUTests, BIT7h_Test);
    TEST_CLEANUP();

    TEST_SETUP(GPUTests);
    TEST_CALL(GPUTests, GPUCycleTest);
    TEST_CLEANUP();

    TEST_SETUP(JoypadTests);
    TEST_CALL(JoypadTests, FullInputTest);
    TEST_CLEANUP();

    TEST_SETUP(MBCTests);
    TEST_CALL(MBCTests, ROMOnlyTest);
    TEST_CALL(MBCTests, MBC1Test);
    TEST_CALL(MBCTests, MBC2Test);
    TEST_CALL(MBCTests, MBC3Test);
    TEST_CLEANUP();

    std::cout << "----------------------------------" << std::endl;
    std::cout << "Passed: " << passed << "   Failed: " << failed << "   Total: " << passed + failed << std::endl;

    return 0;
}
#endif
