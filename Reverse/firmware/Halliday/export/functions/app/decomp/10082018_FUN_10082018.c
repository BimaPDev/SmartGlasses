/* FUN_10082018 @ 0x10082018 */

undefined4 FUN_10082018(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  FUN_10055be0(7);
  FUN_1011a68e(7);
  FUN_1012205a();
  FUN_10055e80(7,DAT_100820e8);
  uVar4 = (uint)*(byte *)(*param_1 + 5);
  if (uVar4 == 0) {
    uVar4 = FUN_10081f60(param_1);
    uVar2 = DAT_100820ec;
    if (0x1f < uVar4) goto LAB_1008204c;
    *(char *)(*param_1 + 5) = (char)uVar4;
  }
  FUN_10119dc2(DAT_100820f0,uVar4);
  iVar3 = FUN_10081f04(param_1,&local_14);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_10081fc4(param_1);
  *DAT_100820f4 = iVar3;
  if (iVar3 != 0) {
    FUN_10119dc2(DAT_100820fc,iVar3);
    FUN_10055e80(7,(uint)*DAT_10082100 * DAT_10082104);
    if (*(char *)(*param_1 + 4) == '\x04') {
      FUN_10119dc2(DAT_10082108);
      bVar1 = thunk_FUN_10120448(param_1,0xb0);
      thunk_FUN_101208dc(param_1,0xb0,bVar1 | 1);
    }
    else {
      FUN_10119dc2(DAT_10082110);
    }
    if (((local_14 != DAT_1008210c) && (local_14 != DAT_1008210c + 0x10001000)) &&
       (local_14 != DAT_1008210c + 0x20002000)) {
      return 0;
    }
    thunk_FUN_101208dc(param_1,0xa0,2);
    return 0;
  }
  uVar4 = 0;
  uVar2 = DAT_100820f8;
LAB_1008204c:
  FUN_10119dc2(uVar2,uVar4);
  return 0xffffffff;
}

