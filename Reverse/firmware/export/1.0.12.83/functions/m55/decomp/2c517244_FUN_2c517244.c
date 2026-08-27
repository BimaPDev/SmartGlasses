/* FUN_2c517244 @ 0x2c517244 */

void FUN_2c517244(undefined4 param_1,int param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uStack_24;
  short sStack_22;
  undefined2 uStack_20;
  short sStack_1e;
  undefined2 uStack_1c;
  short sStack_1a;
  undefined2 uStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *DAT_2c51734c;
  uStack_1c = *param_4;
  sStack_16 = param_4[3];
  uStack_18 = param_4[2];
  if (*(byte *)(param_2 + 200) < 2) {
    if (*(byte *)(param_2 + 200) == 1) {
      sStack_1a = sStack_16 - *(short *)(param_2 + 0xbc);
      FUN_2c612a20(param_3,param_2 + 0x74,&uStack_1c,*(undefined4 *)(param_2 + 0xb0),0);
      sStack_16 = sStack_1a;
    }
    sStack_1a = sStack_16 - *(short *)(param_2 + 0xaa);
    uVar1 = registry_lookup(DAT_2c517350);
    FUN_2c612a20(param_3,param_2 + 0x4c,&uStack_1c,uVar1,0);
  }
  else {
    iVar2 = FUN_2c510a30();
    if (iVar2 == 0) {
      sStack_16 = sStack_16 - *(short *)(param_2 + 0xa8);
    }
    sStack_1a = sStack_16 + -0x28;
    sStack_22 = sStack_16 + -0x14;
    uStack_20 = param_4[2];
    uStack_24 = *param_4;
    sStack_1e = sStack_22;
    FUN_2c6120f4(param_3,param_2 + 0x9c,&uStack_24,&uStack_20);
    sStack_16 = sStack_1a;
    sStack_1a = sStack_1a - *(short *)(param_2 + 0xbc);
    FUN_2c612a20(param_3,param_2 + 0x74,&uStack_1c,*(undefined4 *)(param_2 + 0xac),0);
  }
  if (*DAT_2c51734c != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

