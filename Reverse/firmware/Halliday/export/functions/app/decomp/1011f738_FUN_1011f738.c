/* FUN_1011f738 @ 0x1011f738 */

void FUN_1011f738(undefined1 *param_1,undefined4 param_2)

{
  undefined1 *local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  FUN_100568ec();
  FUN_10056960(&local_10,&local_c);
  *param_1 = (char)local_10;
  param_1[2] = (char)((uint)local_10 >> 0x10);
  param_1[3] = (char)((uint)local_10 >> 0x18);
  param_1[1] = (char)((uint)local_10 >> 8);
  param_1[4] = (char)local_c;
  param_1[6] = (char)((uint)local_c >> 0x10);
  param_1[5] = (char)((uint)local_c >> 8);
  param_1[7] = (char)((uint)local_c >> 0x18);
  FUN_10056914();
  return;
}

