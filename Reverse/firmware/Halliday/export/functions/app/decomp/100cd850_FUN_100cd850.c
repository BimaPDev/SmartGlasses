/* FUN_100cd850 @ 0x100cd850 */

undefined4 FUN_100cd850(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined4 *local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int *local_14;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_2 == (int *)0x0) {
    FUN_10119dc2(DAT_100cd97c,DAT_100cd978,DAT_100cd974,0x8d7,param_1,0);
    FUN_10119dc2(DAT_100cd980);
    uVar2 = FUN_1011a1f0(DAT_100cd974,0x8d7,param_3,param_4);
    param_3 = extraout_r2;
  }
  if (param_2[1] == 0) {
    FUN_10119dc2(DAT_100cd97c,DAT_100cd984,DAT_100cd974,0x8d8,uVar2);
    FUN_10119dc2(DAT_100cd980);
    FUN_1011a1f0(DAT_100cd974,0x8d8,param_3,0);
  }
  iVar1 = FUN_1013457a(DAT_100cd988);
  if (-1 < iVar1 << 0x1e) {
    return 0xfffffff5;
  }
  local_24 = (undefined4 *)param_2[1];
  if ((param_1 != 0) && (*(char *)(param_1 + 0xd) != '\a')) {
    return 0xffffff80;
  }
  iVar1 = FUN_100cd268();
  local_20 = (undefined2)iVar1;
  if (iVar1 == 0) {
LAB_100cd8c2:
    local_1c = 0xfffffffe;
  }
  else {
    if (*param_2 != 0) {
      local_24 = (undefined4 *)0x0;
      FUN_100cd304(iVar1,0xffff,*param_2,0,1,DAT_100cd98c,&local_24);
      if (local_24 == (undefined4 *)0x0) goto LAB_100cd8c2;
    }
    local_28[0] = 0;
    local_26 = 0x2803;
    iVar1 = FUN_10132c82(*local_24,local_28);
    if (iVar1 == 0) {
      if (-1 < (int)((uint)*(byte *)(local_24[3] + 6) << 0x1b)) {
        return 0xffffffea;
      }
      local_20 = FUN_10134b52();
    }
    if (param_1 == 0) {
      local_1c = 0xffffff80;
      local_26 = 0x2902;
      local_18 = 1;
      local_28[0] = 0;
      local_14 = param_2;
      FUN_100cd304(local_20,0xffff,local_28,0,1,DAT_100cd990,&local_24);
    }
    else {
      local_1c = FUN_100ccfb0(param_1,local_20,param_2);
    }
  }
  return local_1c;
}

