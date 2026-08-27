/* FUN_2c4c2564 @ 0x2c4c2564 */

void FUN_2c4c2564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar5 = DAT_2c4c25b4;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *DAT_2c4c25b4 = 0x2c4c2574;
    puVar5[1] = unaff_lr;
  }
  puVar5 = DAT_2c4c25b8;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  pcVar4 = (char *)DAT_2c4c25b8[0x4b];
  if (pcVar4 != (char *)0x0) {
    DAT_2c4c25b8[0x4b] = *(undefined4 *)(pcVar4 + 4);
  }
  puVar3 = DAT_2c4c25b4;
  if (iVar6 == 0) {
    *DAT_2c4c25b4 = 0xffffffff;
    puVar5 = puVar3;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c25bc,cVar1,puVar5,cVar1,param_4);
    }
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    *(undefined4 *)(pcVar4 + 0xc) = param_1;
    *(undefined4 *)(pcVar4 + 0x10) = param_2;
    *pcVar4 = '\x01';
  }
  return;
}

