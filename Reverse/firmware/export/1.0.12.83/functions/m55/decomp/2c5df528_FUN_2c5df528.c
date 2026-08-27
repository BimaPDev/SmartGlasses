/* FUN_2c5df528 @ 0x2c5df528 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5df528(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _LAB_2c5df568;
  FUN_2c606e74(param_1,(int)((longlong)_LAB_2c5df568 * (longlong)(param_2 * 0xff) >> 0x25) -
                       (param_2 * 0xff >> 0x1f) & 0xff,0);
  uVar2 = FUN_2c603170(param_1,0);
  lv_obj_set_local_style_prop
            (uVar2,0x6c,
             (int)(short)(((short)(int)((longlong)iVar1 * (longlong)(param_2 * 0x1a) >> 0x25) -
                          (short)(param_2 * 0x1a >> 0x1f)) + 0xe6));
  if (*DAT_2c603c74 == '\0') {
    return;
  }
  FUN_2c603540(param_1,0,0x6c);
  return;
}

