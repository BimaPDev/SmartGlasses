/* FUN_2c5d8a20 @ 0x2c5d8a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d8a20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c5d8ba4;
  iVar1 = FUN_2c602400();
  iVar2 = FUN_2c621084(param_1);
  if (((iVar2 != 0) && (iVar1 != 0)) && (iVar2 = FUN_2c62107c(), iVar2 != 0)) {
    iVar3 = FUN_2c6041fc(iVar1);
    if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5d8bb8,0x25e,_LAB_2c5d8bb4,_LAB_2c5d8bb0);
    }
    uVar4 = FUN_2c6041dc(iVar1,iVar1 == 0);
    uVar5 = FUN_2c6041dc(iVar1,1);
    uVar6 = FUN_2c6041dc(iVar1,2);
    if ((*(int *)(iVar2 + 4) != 0) || (*(int *)(iVar2 + 0xc) < 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5d8bb8,0x267,_LAB_2c5d8bb4,_LAB_2c5d8bbc,*(int *)(iVar2 + 4),
                   *(int *)(iVar2 + 0xc));
    }
    FUN_2c62c3b0(auStack_3c,0x20);
    func_0x2c5d8980(auStack_3c,0x1f,*(undefined4 *)(iVar2 + 0xc));
    FUN_2c638730(uVar5,auStack_3c);
    FUN_2c606abc(uVar5,1);
    FUN_2c606dd8(uVar6,0xff,0);
    uVar5 = FUN_2c5e2e8c(_LAB_2c5d8ba8);
    FUN_2c63140c(uVar6,uVar5);
    FUN_2c6072bc(uVar6,5,0,0xfffffff8);
    if (*(int *)(iVar2 + 0x10) < 1) {
      FUN_2c6371f4(uVar4,0);
    }
    else {
      fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
      iVar1 = (int)((fVar7 * fRam2c5d8bac) / fVar8);
      if (99 < iVar1) {
        iVar1 = 100;
      }
      FUN_2c6371f4(uVar4,(int)(short)iVar1);
    }
  }
  if (*_LAB_2c5d8ba4 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

