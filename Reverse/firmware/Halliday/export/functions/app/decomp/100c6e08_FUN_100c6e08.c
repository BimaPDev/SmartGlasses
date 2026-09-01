/* FUN_100c6e08 @ 0x100c6e08 */

undefined4 FUN_100c6e08(uint param_1,int param_2)

{
  int iVar1;
  undefined1 local_19;
  undefined4 local_18;
  undefined3 uStack_14;
  
  local_19 = (undefined1)param_1;
  if (1 < param_1) {
    return 0xffffffea;
  }
  if (param_2 != 0) {
    local_18 = 0;
    uStack_14 = 0;
    iVar1 = FUN_10132eb0(param_2,&local_18);
    if (iVar1 != 0) {
      FUN_100c51f8(local_19,param_2);
      return 0;
    }
  }
  FUN_100e0978(local_19,DAT_100c6e54,&local_19);
  return 0;
}

