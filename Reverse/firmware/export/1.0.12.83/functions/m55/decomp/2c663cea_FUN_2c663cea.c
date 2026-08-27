/* FUN_2c663cea @ 0x2c663cea */

undefined4 *
FUN_2c663cea(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_90 = param_3;
  uStack_8c = param_4;
  uVar2 = FUN_2c65fc58(param_7 + 0x6c);
  FUN_2c65f926(uVar2,auStack_80);
  FUN_2c65f8e8(uVar2,auStack_50);
  iStack_84 = 0;
  FUN_2c661844(&uStack_98,param_2,uStack_90,uStack_8c,param_5,param_6,&uStack_88,auStack_80,0xc,
               iVar3,&iStack_84);
  uStack_90 = uStack_98;
  uStack_8c = uStack_94;
  if (iStack_84 == 0) {
    *(undefined4 *)(param_9 + 0x10) = uStack_88;
  }
  else {
    *puVar1 = *puVar1 | 4;
  }
  iVar3 = FUN_2c656bf6(&uStack_90,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_90;
  param_1[1] = uStack_8c;
  return param_1;
}

