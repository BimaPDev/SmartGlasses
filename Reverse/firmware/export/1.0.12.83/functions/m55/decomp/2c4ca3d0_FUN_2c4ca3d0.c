/* FUN_2c4ca3d0 @ 0x2c4ca3d0 */

undefined4 FUN_2c4ca3d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  FUN_2c6741e8(0x41,DAT_2c4ca494,DAT_2c4ca498,param_4,param_4);
  puVar3 = DAT_2c4ca4a0;
  if (param_1 == 0) {
    FUN_2c6741e8(0x41,DAT_2c4ca4c4,DAT_2c4ca498);
    return 4;
  }
  if (param_3 != 1) {
    FUN_2c6741e8(0x42,DAT_2c4ca4b4,DAT_2c4ca498,param_3,param_4);
    return 1;
  }
  if (*DAT_2c4ca49c == 0) {
    FUN_2c6741e8(0x42,DAT_2c4ca4c0,DAT_2c4ca498,1,param_4);
    return 1;
  }
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    *DAT_2c4ca4a0 = 0x2c4ca3fe;
    puVar3[1] = unaff_lr;
  }
  pcVar4 = DAT_2c4ca4a4;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *DAT_2c4ca4a4;
  FUN_2c674668(DAT_2c4ca4a8,param_1,0x788,0x40);
  puVar6 = DAT_2c4ca4ac;
  uVar5 = DAT_2c4ca4a8;
  if (cVar1 == '\0') {
    *pcVar4 = '\x01';
    uVar7 = DAT_2c4ca4b0;
    *puVar6 = 0;
    FUN_2c674668(uVar7,uVar5,0x788);
  }
  else {
    *DAT_2c4ca4ac = 1;
  }
  if (iVar8 == 0) {
    *DAT_2c4ca4a0 = 0xffffffff;
  }
  puVar3 = DAT_2c4ca4b8;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_2c4c9fa8();
  FUN_2c4c26a8(*puVar3);
  FUN_2c4c261c(*puVar3,*DAT_2c4ca4bc);
  return 0;
}

