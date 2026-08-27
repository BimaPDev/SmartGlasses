/* FUN_2c1353b4 @ 0x2c1353b4 */

undefined4 FUN_2c1353b4(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined4 unaff_lr;
  undefined4 *puVar5;
  
  puVar2 = DAT_2c135410;
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *DAT_2c135410 = 0x2c1353c8;
    puVar2[1] = unaff_lr;
  }
  puVar2 = DAT_2c13541c;
  pcVar3 = DAT_2c135418;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if ((*DAT_2c135414 != '\0') && (*DAT_2c135418 != '\0')) {
    *DAT_2c135418 = '\0';
    puVar4 = puVar2;
    do {
      puVar5 = puVar4 + 1;
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(param_1,param_2);
      }
      puVar4 = puVar5;
    } while (puVar2 + 3 != puVar5);
    *pcVar3 = '\x01';
  }
  if (iVar6 == 0) {
    *DAT_2c135410 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
  return param_2;
}

