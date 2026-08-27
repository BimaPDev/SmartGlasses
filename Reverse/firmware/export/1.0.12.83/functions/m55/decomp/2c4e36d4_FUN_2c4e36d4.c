/* FUN_2c4e36d4 @ 0x2c4e36d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4e36d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar4 = FUN_2c4e3bc4();
  uVar5 = uRam2c4e3770;
  if (iVar4 != 0) {
    uVar5 = FUN_2c4e3bc4();
  }
  pbVar3 = DAT_2c4e3760;
  uVar2 = DAT_2c4e375c;
  uVar1 = DAT_2c4e3758;
  FUN_2c4e0504(DAT_2c4e3764,2,0,0,DAT_2c4e375c,0x15,DAT_2c4e3758,0x1300,DAT_2c4e3754,uVar5);
  uVar6 = (uint)*pbVar3;
  if (uVar6 == 0) {
    uVar6 = FUN_2c4db2ac(0);
    if (uVar6 == 0) {
      FUN_2c4e34f4(0x8ffd,0x17,1);
      FUN_2c4e0504(uRam2c4e376c,0,0,0,uVar2,0x17,uVar1,0x1300,_LAB_2c4e3768,uVar5);
    }
    else {
      *pbVar3 = 1;
    }
  }
  return uVar6;
}

