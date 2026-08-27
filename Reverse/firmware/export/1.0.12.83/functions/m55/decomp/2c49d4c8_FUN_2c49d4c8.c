/* FUN_2c49d4c8 @ 0x2c49d4c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49d4c8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  byte local_2a;
  byte local_29;
  undefined2 local_28;
  undefined4 local_24;
  
  local_24 = *_LAB_2c49d670;
  local_2a = 0;
  iVar1 = FUN_2c49c6a0(param_1,8,&local_2a,0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4a1,_LAB_2c49d694,_LAB_2c49d690,_LAB_2c49d6a0,iVar1);
  }
  uVar7 = (uint)local_2a;
  if ((local_2a & 0xf0) != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4a6,_LAB_2c49d694,_LAB_2c49d690,_LAB_2c49d69c,uVar7,0);
  }
  uVar2 = FUN_2c49c6a0(param_1,0xab,&local_29);
  if (-1 < (int)uVar2) {
    *(uint *)(param_1 + 0x38) = (uint)local_29;
    uVar2 = uVar7 & 0xf0;
  }
  iVar1 = _LAB_2c49d674;
  iVar3 = FUN_2c49cbf8(param_1);
  iVar3 = uVar2 + iVar3;
  local_28 = 0;
  iVar4 = FUN_2c49c9e8(iVar1,0xa4,&local_28);
  if (iVar4 < 0) {
    iVar3 = iVar3 + iVar4;
  }
  else {
    iVar4 = (uint)local_28._1_1_ + (uint)(byte)local_28 * 0x100;
    *(int *)(iVar1 + 0x30) = iVar4 >> 4;
    *_LAB_2c49d678 = (short)iVar4;
  }
  iVar10 = 0;
  iVar1 = FUN_2c49c7b0();
  iVar4 = 3;
  iVar3 = iVar3 + iVar1;
  uVar7 = 0;
  do {
    iVar1 = FUN_2c49ce4c(param_1);
    uVar7 = uVar7 + *(int *)(param_1 + 0x14);
    FUN_2c6444fc(10);
    iVar5 = FUN_2c49cb44(param_1);
    iVar10 = iVar10 + *(int *)(param_1 + 0x2c);
    FUN_2c6444fc(10);
    iVar4 = iVar4 + -1;
    iVar3 = iVar5 + iVar1 + iVar3;
  } while (iVar4 != 0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4ba,_LAB_2c49d694,_LAB_2c49d690,_LAB_2c49d6a8,_LAB_2c49d6a4,iVar3);
  }
  sVar6 = (short)(iVar10 >> 0x1f) -
          (short)((ulonglong)((longlong)_LAB_2c49d680 * (longlong)iVar10) >> 0x20);
  if (-3 < iVar10) {
    sVar6 = 0;
  }
  iVar1 = 0;
  do {
    sVar8 = *(short *)(_LAB_2c49d684 + iVar1 * 4 + 2);
    uVar9 = sVar8 - sVar6;
    if (*(int *)(param_1 + 0x14) <= (int)(uint)uVar9) goto LAB_2c49d5c0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  sVar8 = *(short *)(_LAB_2c49d684 + 0x196);
LAB_2c49d5c0:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4cd,_LAB_2c49d694,_LAB_2c49d690,_LAB_2c49d68c,*(undefined4 *)(param_1 + 0x20),
        (uint)((ulonglong)_LAB_2c49d67c * (ulonglong)uVar7 >> 0x21),
        (int)((ulonglong)((longlong)_LAB_2c49d680 * (longlong)iVar10) >> 0x20) - (iVar10 >> 0x1f),
        iVar1,(uint)uVar9,sVar8,*_LAB_2c49d698,*_LAB_2c49d688,0);
}

