/* FUN_100d4440 @ 0x100d4440 */

byte FUN_100d4440(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 auStack_24 [2];
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_1c;
  
  FUN_1011ea48(auStack_24,0,0x14);
  local_22 = param_1;
  local_21 = param_2;
  local_1c = param_3;
  bVar1 = FUN_1009ece8(DAT_100d4470,auStack_24);
  return bVar1 ^ 1;
}

