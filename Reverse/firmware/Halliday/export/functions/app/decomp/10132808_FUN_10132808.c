/* FUN_10132808 @ 0x10132808 */

void FUN_10132808(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_100c1fe4(param_1,4);
  puVar1[1] = (char)((uint)param_2 >> 0x10);
  *puVar1 = (char)((uint)param_2 >> 0x18);
  puVar1[2] = (char)((uint)param_2 >> 8);
  puVar1[3] = (char)param_2;
  return;
}

