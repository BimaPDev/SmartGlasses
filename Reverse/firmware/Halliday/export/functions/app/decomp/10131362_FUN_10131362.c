/* FUN_10131362 @ 0x10131362 */

int FUN_10131362(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar4 = &local_20;
  local_20 = param_1;
  puStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_101368be(param_1,puVar4);
  if ((iVar1 == 0) && (param_2 != (undefined4 *)0x0)) {
    do {
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      puVar4 = puVar4 + 2;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2 = param_2 + 2;
    } while (puVar4 != (undefined4 *)&stack0xfffffff0);
  }
  return iVar1;
}

