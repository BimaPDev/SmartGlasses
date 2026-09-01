/* FUN_100b9f78 @ 0x100b9f78 */

void FUN_100b9f78(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_24 [2];
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_1c;
  
  FUN_1011ea48(auStack_24,0,0x14);
  iVar1 = DAT_100b9fc0;
  local_22 = 0x29;
  local_21 = param_1;
  local_1c = param_2;
  FUN_1009ece8(DAT_100b9fbc,auStack_24);
  FUN_100a5b78(DAT_100b9fc8 | (iVar1 - DAT_100b9fc4) * 0x20 & 0xff00U,DAT_100b9fd0,DAT_100b9fcc,
               local_1c);
  return;
}

