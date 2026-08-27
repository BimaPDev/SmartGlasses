/* FUN_2c4a132c @ 0x2c4a132c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a132c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  short *psVar4;
  short *psVar5;
  longlong lVar6;
  undefined4 uStack_20;
  uint uStack_1c;
  
  uStack_1c = *_LAB_2c4a13e4;
  psVar5 = _LAB_2c4a13e8 + 0x1ec;
  psVar4 = _LAB_2c4a13e8;
  do {
    sVar1 = *psVar4;
    uStack_20 = *(undefined4 *)(psVar4 + 2);
    if ((sVar1 == 0x120) && (*(int *)(param_1 + 0x68) != 0)) {
      uStack_20 = 0xff;
    }
    uVar2 = uStack_20;
    iVar3 = FUN_2c4a05cc(sVar1);
    if ((iVar3 != 0) && (lVar6 = FUN_2c4a05cc(sVar1,uVar2), (int)lVar6 < 0)) goto LAB_2c4a1374;
    psVar4 = psVar4 + 4;
  } while (psVar4 != psVar5);
  uStack_20 = 0xf0f;
  iVar3 = FUN_2c4a05cc(0x104);
  if (iVar3 != 0) {
    FUN_2c4a05cc(0x104,0xf0f);
  }
  uStack_20 = 0xf;
  iVar3 = FUN_2c4a05cc(0x100);
  if (iVar3 != 0) {
    FUN_2c4a05cc(0x100,0xf);
  }
  FUN_2c4a09bc(0x100,&uStack_20);
  func_0x2c4a1030(param_1,0);
  lVar6 = (ulonglong)extraout_r1 << 0x20;
LAB_2c4a1374:
  if ((*_LAB_2c4a13e4 ^ uStack_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),*_LAB_2c4a13e4 ^ uStack_1c,0);
}

