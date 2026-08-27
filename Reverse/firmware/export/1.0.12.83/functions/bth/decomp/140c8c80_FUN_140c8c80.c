/* FUN_140c8c80 @ 0x140c8c80 */

void FUN_140c8c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  local_48[0] = auStack_40;
  FUN_140c7be0(local_48,param_7,param_8 + param_7);
  FUN_140c58c6(auStack_30,param_2,param_4,param_5,param_6,local_48);
  FUN_140c8b0c(param_3,auStack_30);
  FUN_140d18d4(auStack_30);
  FUN_140d18d4(local_48);
  return;
}

