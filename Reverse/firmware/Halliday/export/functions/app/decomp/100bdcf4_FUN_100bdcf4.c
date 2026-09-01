/* FUN_100bdcf4 @ 0x100bdcf4 */

undefined1
FUN_100bdcf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  uVar4 = FUN_100bdac8();
  local_18 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar2 = (undefined1 *)uVar4;
  uVar1 = 0;
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = param_3;
    local_20 = (undefined4 *)*param_1;
    local_1c._0_3_ = CONCAT12(*puVar2,*(undefined2 *)(param_1 + 1));
    local_14 = DAT_100bdd34;
    iVar3 = FUN_10136b36(&local_20);
    if (iVar3 == 0) {
      uVar1 = *puVar2;
    }
    else {
      FUN_1013159c(puVar2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

