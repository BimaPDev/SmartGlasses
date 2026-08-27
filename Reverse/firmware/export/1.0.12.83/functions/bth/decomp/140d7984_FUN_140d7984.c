/* FUN_140d7984 @ 0x140d7984 */

void FUN_140d7984(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_14;
  undefined4 uStack_10;
  
  uVar4 = param_1[1];
  local_14 = param_2;
  if (param_2 < uVar4) {
    local_14 = uVar4;
  }
  puVar5 = param_1 + 2;
  puVar2 = (undefined4 *)*param_1;
  if (puVar5 == puVar2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (local_14 != uVar3) {
    uStack_10 = param_3;
    if ((local_14 < uVar3) && (local_14 < 4)) {
      if (puVar5 != puVar2) {
        FUN_140d7822(puVar5,puVar2,uVar4 + 1,uVar4,param_1);
        thunk_FUN_140db700(*param_1);
        *param_1 = puVar5;
      }
    }
    else {
      uVar1 = FUN_140d777c(param_1,&local_14);
      FUN_140d7822(uVar1,*param_1,param_1[1] + 1);
      FUN_140d77c4(param_1);
      *param_1 = uVar1;
      param_1[2] = local_14;
    }
  }
  return;
}

