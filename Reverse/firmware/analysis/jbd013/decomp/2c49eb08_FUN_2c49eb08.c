/* FUN_2c49eb08 @ 0x2c49eb08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49eb08(int param_1)

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
  
  uStack_1c = *_LAB_2c49ebc0;
  psVar5 = _LAB_2c49ebc4 + 0x1ec;
  psVar4 = _LAB_2c49ebc4;
  do {
    sVar1 = *psVar4;
    uStack_20 = *(undefined4 *)(psVar4 + 2);
    if ((sVar1 == 0x120) && (*(int *)(param_1 + 0x60) != 0)) {
      uStack_20 = 0xff;
    }
    uVar2 = uStack_20;
    iVar3 = FUN_2c49e080(sVar1);
    if ((iVar3 != 0) && (lVar6 = FUN_2c49e080(sVar1,uVar2), (int)lVar6 < 0)) goto LAB_2c49eb50;
    psVar4 = psVar4 + 4;
  } while (psVar4 != psVar5);
  uStack_20 = 0x3f3f;
  iVar3 = FUN_2c49e080(0x104);
  if (iVar3 != 0) {
    FUN_2c49e080(0x104,0x3f3f);
  }
  uStack_20 = 0xf;
  iVar3 = FUN_2c49e080(0x100);
  if (iVar3 != 0) {
    FUN_2c49e080(0x100,0xf);
  }
  FUN_2c49e3b0(0x100,&uStack_20);
  func_0x2c49e810(param_1,0);
  lVar6 = (ulonglong)extraout_r1 << 0x20;
LAB_2c49eb50:
  if ((*_LAB_2c49ebc0 ^ uStack_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),*_LAB_2c49ebc0 ^ uStack_1c,0);
}

