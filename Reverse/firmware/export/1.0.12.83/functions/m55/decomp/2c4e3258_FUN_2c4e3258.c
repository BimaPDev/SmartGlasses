/* FUN_2c4e3258 @ 0x2c4e3258 */

int FUN_2c4e3258(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_2c4e32fc;
  uVar1 = DAT_2c4e32f8;
  FUN_2c4e0504(DAT_2c4e3300,7,0,0,DAT_2c4e32fc,0x12,DAT_2c4e32f8,0x1300,0);
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  iVar3 = (**(code **)(*param_1 + 0x5c))(param_1);
  if (iVar3 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x17,1);
    uVar4 = 0x17;
    uVar5 = DAT_2c4e3304;
  }
  else {
    iVar3 = FUN_2c4e2edc(param_1);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x1a,1);
    uVar4 = 0x1a;
    uVar5 = DAT_2c4e330c;
  }
  FUN_2c4e0504(DAT_2c4e3308,0,0,0,uVar2,uVar4,uVar1,0x1300,uVar5);
  return 0;
}

