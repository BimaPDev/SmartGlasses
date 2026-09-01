/* FUN_10010a8c @ 0x10010a8c */

void FUN_10010a8c(undefined1 param_1,short param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 local_20;
  short sStack_1e;
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar2 = 0;
  local_14 = *DAT_10010b14;
  _local_20 = CONCAT22(param_2 + 5,(short)*DAT_10010b18);
  local_1c = (uint)CONCAT12(param_1,*(undefined2 *)(DAT_10010b18 + 1));
  local_18 = param_3 & 0xffffff00;
  FUN_100b6474(&local_20,9,100);
  FUN_100a5b78((DAT_10010b20 - DAT_10010b1c) * 0x20 & 0xff00U | 0x620031,DAT_10010b28,DAT_10010b24,9
              );
  FUN_10119dc2(DAT_10010b2c);
  uVar1 = DAT_10010b30;
  puVar3 = &local_20;
  do {
    iVar2 = iVar2 + 1;
    FUN_10119dc2(uVar1,*(undefined1 *)puVar3);
    puVar3 = (undefined2 *)((int)puVar3 + 1);
  } while (iVar2 != 9);
  FUN_10119dc2(DAT_10010b2c);
  if (*DAT_10010b14 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

