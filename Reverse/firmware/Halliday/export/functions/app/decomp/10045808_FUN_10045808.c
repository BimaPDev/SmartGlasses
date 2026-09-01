/* FUN_10045808 @ 0x10045808 */

void FUN_10045808(void)

{
  undefined1 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 local_24;
  undefined2 *local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1004587c;
  local_18 = *(undefined2 *)PTR_DAT_10045880;
  local_16 = 0;
  pcVar3 = *(code **)(PTR_DAT_10045884 + 8);
  pcVar2 = *(code **)(PTR_DAT_10045884 + 0x1c);
  (*pcVar3)(0);
  uVar1 = (*pcVar2)();
  local_18 = CONCAT11(local_18._1_1_,uVar1);
  (*pcVar3)(1);
  uVar1 = (*pcVar2)();
  local_18 = CONCAT11(uVar1,(undefined1)local_18);
  (*pcVar3)(2);
  local_16 = (*pcVar2)();
  local_24 = 0x3d02;
  local_20 = &local_18;
  local_1c = 0x80003;
  FUN_100506fc(&local_24);
  if (*(int *)PTR_DAT_1004587c != local_14) {
    FUN_1013cdc0();
  }
  return;
}

