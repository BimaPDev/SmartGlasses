/* FUN_2c47decc @ 0x2c47decc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47decc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int unaff_r4;
  undefined4 *puVar7;
  int in_stack_0000011c;
  
  piVar1 = _LAB_2c47e1b4;
  if (*_LAB_2c47e1b4 != 0) {
    FUN_2c6741e8(0x711,uRam2c47e1bc,_FUN_2c47e1b8);
  }
  iVar2 = FUN_2c47245c(1,0x1d8);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0,0x1d8);
    uVar3 = FUN_2c47245c(1,*(undefined4 *)(unaff_r4 + 0x50));
    puVar7 = (undefined4 *)*piVar1;
    *(undefined4 *)(iVar2 + 0x1cc) = uVar3;
    if (puVar7[0x73] != 0) {
      puVar7[0x74] = 0;
      puVar7[0x36] = *(undefined4 *)(unaff_r4 + 0x50);
      puVar6 = *(undefined4 **)(unaff_r4 + 0x74);
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      puVar7[0x6a] = *puVar6;
      puVar7[0x6b] = uVar3;
      puVar7[0x6c] = uVar4;
      puVar7[0x6d] = uVar5;
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      uVar5 = puVar6[4];
      puVar7[0x6f] = puVar6[5];
      puVar7[0x71] = uVar4;
      puVar7[0x6e] = uVar5;
      puVar7[0x70] = uVar3;
      *(undefined1 *)(puVar7 + 0x72) = 0;
      uVar3 = *(undefined4 *)(unaff_r4 + 0x78);
      iVar2 = FUN_2c66c4ec(uVar3);
      if (99 < iVar2 + 1U) {
        iVar2 = 100;
      }
      FUN_2c674668(puVar7 + 0x37,uVar3,iVar2);
      *(undefined1 *)((int)puVar7 + iVar2 + 0xdc) = 0;
      uVar3 = *(undefined4 *)(unaff_r4 + 0x14);
      iVar2 = FUN_2c66c4ec(uVar3);
      if (99 < iVar2 + 1U) {
        iVar2 = 100;
      }
      FUN_2c674668(puVar7 + 0x50,uVar3,iVar2);
      *(undefined1 *)((int)puVar7 + iVar2 + 0x140) = 0;
      uVar4 = *(undefined4 *)(unaff_r4 + 0x40);
      puVar7[2] = uVar4;
      uVar5 = *(undefined4 *)(unaff_r4 + 0x58);
      *puVar7 = uVar5;
      uVar3 = *(undefined4 *)(unaff_r4 + 0x10);
      iVar2 = FUN_2c66c4ec(uVar3);
      if (199 < iVar2 + 1U) {
        iVar2 = 200;
      }
      FUN_2c674668(puVar7 + 3,uVar3,iVar2);
      *(undefined1 *)((int)puVar7 + iVar2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x90,uRam2c47e1c4,uRam2c47e1c8,uRam2c47e1c0,_FUN_2c47e1b8,puVar7[0x36],uVar4,uVar5);
    }
  }
  FUN_2c6741e8(0x711,uRam2c47e540,_FUN_2c47e53c);
  FUN_2c473f40(&stack0x00000068);
  if (*DAT_2c47dbd0 != in_stack_0000011c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

