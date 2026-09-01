/* FUN_1011fc94 @ 0x1011fc94 */

void FUN_1011fc94(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 local_14;
  ushort local_12;
  undefined4 local_10;
  undefined4 local_c;
  
  pcVar1 = *(code **)(param_1 + 0x40);
  local_c = 0;
  if (pcVar1 != (code *)0x0) {
    _local_14 = CONCAT22((ushort)*(byte *)(param_1 + 0x46),1);
    local_10 = param_2;
    (*pcVar1)(0,&local_14,0,pcVar1,param_1);
  }
  return;
}

