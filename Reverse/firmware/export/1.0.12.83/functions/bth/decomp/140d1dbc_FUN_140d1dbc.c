/* FUN_140d1dbc @ 0x140d1dbc */

void FUN_140d1dbc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [20];
  
  if (param_1 == param_2) {
    return;
  }
  puVar5 = param_1 + 2;
  puVar1 = (undefined4 *)*param_1;
  puVar4 = param_2 + 2;
  puVar2 = (undefined4 *)*param_2;
  if (puVar5 == puVar1) {
    if (puVar4 == puVar2) {
      if (param_1[1] == 0) {
        if (param_2[1] != 0) {
          FUN_140d1888(puVar5,puVar4,0x10);
          param_1[1] = param_2[1];
          param_2[1] = 0;
          *(undefined1 *)*param_2 = 0;
          return;
        }
      }
      else {
        if (param_2[1] == 0) {
          FUN_140d1888(puVar4,puVar5,0x10);
          param_2[1] = param_1[1];
          param_1[1] = 0;
          *(undefined1 *)*param_1 = 0;
          return;
        }
        FUN_140d1888(auStack_30,puVar4,0x10);
        FUN_140d1888(puVar4,puVar5,0x10);
        FUN_140d1888(puVar5,auStack_30,0x10);
      }
    }
    else {
      uVar3 = param_2[2];
      FUN_140d1888(puVar4,puVar5,0x10);
      *param_1 = *param_2;
      *param_2 = puVar4;
      param_1[2] = uVar3;
    }
  }
  else {
    uVar3 = param_1[2];
    if (puVar4 == puVar2) {
      FUN_140d1888(puVar5,puVar4,0x10);
      *param_2 = *param_1;
      *param_1 = puVar5;
    }
    else {
      *param_1 = puVar2;
      *param_2 = puVar1;
      param_1[2] = param_2[2];
    }
    param_2[2] = uVar3;
  }
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar3;
  return;
}

