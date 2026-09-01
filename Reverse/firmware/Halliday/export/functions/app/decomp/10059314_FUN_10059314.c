/* FUN_10059314 @ 0x10059314 */

undefined4 FUN_10059314(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1011ab5a(param_2);
  if (param_2 == 0) {
    uVar1 = 0xfffffff8;
  }
  else if ((uint)uVar3 < 0x100) {
    if (param_1 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x260) << 0xf;
      if (iVar2 < 0) {
        FUN_10119dc2(DAT_100593b4,DAT_100593b0,DAT_100593ac,0x63f,uVar3);
        FUN_10119dc2(DAT_100593b8);
        FUN_1011a1f0(DAT_100593ac,0x63f,extraout_r2,iVar2);
      }
      FUN_1011e9f0(*(int *)(param_1 + 8) + 0x42,param_2);
      iVar2 = *(int *)(param_1 + 8);
      *(short *)(iVar2 + 0x3c) = (short)uVar3;
      *(short *)(iVar2 + 0x3e) = (short)uVar3;
      thunk_FUN_10113cfc(iVar2 + 0x2f4,extraout_r1,0xffffffff,0xffffffff);
      uVar1 = FUN_10058478(param_1);
      thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x2f4);
      iVar2 = *(int *)(param_1 + 8);
      *(undefined1 *)(iVar2 + 0x42) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
  }
  else {
    uVar1 = 0xfffffff4;
  }
  return uVar1;
}

