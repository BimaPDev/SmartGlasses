/* FUN_2c6537b6 @ 0x2c6537b6 */

undefined4 *
FUN_2c6537b6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [28];
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_68 = param_3;
  uStack_64 = param_4;
  uVar2 = FUN_2c659a4c(param_7 + 0x6c);
  FUN_2c6592fc(uVar2,auStack_58);
  FUN_2c6592dc(uVar2,auStack_3c);
  iStack_5c = 0;
  FUN_2c652fce(&uStack_70,param_2,uStack_68,uStack_64,param_5,param_6,&uStack_60,auStack_58,7,iVar3,
               &iStack_5c);
  uStack_68 = uStack_70;
  uStack_64 = uStack_6c;
  if (iStack_5c == 0) {
    *(undefined4 *)(param_9 + 0x18) = uStack_60;
  }
  else {
    *puVar1 = *puVar1 | 4;
  }
  iVar3 = FUN_2c652d76(&uStack_68,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_68;
  param_1[1] = uStack_64;
  return param_1;
}

