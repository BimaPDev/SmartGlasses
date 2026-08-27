/* FUN_2c47dea4 @ 0x2c47dea4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47dea4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_r4;
  undefined4 *puVar7;
  int in_stack_00000120;
  
  piVar2 = _LAB_2c47e1b4;
  if (unaff_r4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*_LAB_2c47e1b4 != 0) {
    FUN_2c6741e8(0x711,uRam2c47e1bc,_FUN_2c47e1b8);
  }
  iVar3 = FUN_2c47245c(1,0x1d8);
  *piVar2 = iVar3;
  if (iVar3 != 0) {
    FUN_2c674268(iVar3,0,0x1d8);
    uVar4 = FUN_2c47245c(1,uRam00000050);
    puVar7 = (undefined4 *)*piVar2;
    *(undefined4 *)(iVar3 + 0x1cc) = uVar4;
    if (puVar7[0x73] != 0) {
      puVar7[0x74] = 0;
      puVar7[0x36] = uRam00000050;
      puVar1 = _DAT_00000074;
      uVar4 = _DAT_00000074[1];
      uVar5 = _DAT_00000074[2];
      uVar6 = _DAT_00000074[3];
      puVar7[0x6a] = *_DAT_00000074;
      puVar7[0x6b] = uVar4;
      puVar7[0x6c] = uVar5;
      puVar7[0x6d] = uVar6;
      uVar4 = puVar1[6];
      uVar5 = puVar1[7];
      uVar6 = puVar1[4];
      puVar7[0x6f] = puVar1[5];
      puVar7[0x71] = uVar5;
      puVar7[0x6e] = uVar6;
      puVar7[0x70] = uVar4;
      *(undefined1 *)(puVar7 + 0x72) = 0;
      uVar4 = _DAT_00000078;
      iVar3 = FUN_2c66c4ec(_DAT_00000078);
      if (99 < iVar3 + 1U) {
        iVar3 = 100;
      }
      FUN_2c674668(puVar7 + 0x37,uVar4,iVar3);
      *(undefined1 *)((int)puVar7 + iVar3 + 0xdc) = 0;
      uVar4 = _BusFault;
      iVar3 = FUN_2c66c4ec(_BusFault);
      if (99 < iVar3 + 1U) {
        iVar3 = 100;
      }
      FUN_2c674668(puVar7 + 0x50,uVar4,iVar3);
      *(undefined1 *)((int)puVar7 + iVar3 + 0x140) = 0;
      uVar5 = _IRQ;
      puVar7[2] = _IRQ;
      uVar6 = uRam00000058;
      *puVar7 = uRam00000058;
      uVar4 = _MemManage;
      iVar3 = FUN_2c66c4ec(_MemManage);
      if (199 < iVar3 + 1U) {
        iVar3 = 200;
      }
      FUN_2c674668(puVar7 + 3,uVar4,iVar3);
      *(undefined1 *)((int)puVar7 + iVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x90,uRam2c47e1c4,uRam2c47e1c8,uRam2c47e1c0,_FUN_2c47e1b8,puVar7[0x36],uVar5,uVar6);
    }
  }
  FUN_2c6741e8(0x711,uRam2c47e540,_FUN_2c47e53c);
  FUN_2c473f40(&stack0x0000006c);
  if (*DAT_2c47dbd0 != in_stack_00000120) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

