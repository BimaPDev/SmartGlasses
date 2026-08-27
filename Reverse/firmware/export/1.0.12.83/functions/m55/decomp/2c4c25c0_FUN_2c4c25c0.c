/* FUN_2c4c25c0 @ 0x2c4c25c0 */

undefined4 FUN_2c4c25c0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c4c2618;
  pcVar2 = DAT_2c4c2614;
  if ((param_1 <= DAT_2c4c2614 + 0x118) && (DAT_2c4c2614 <= param_1)) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c4c2618 = 0x2c4c25de;
      puVar3[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (*param_1 == '\x01') {
      uVar4 = 0;
      *param_1 = '\0';
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pcVar2 + 300);
      *(char **)(pcVar2 + 300) = param_1;
    }
    else {
      uVar4 = 3;
    }
    if (iVar5 == 0) {
      *DAT_2c4c2618 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar5);
    }
    return uVar4;
  }
  return 2;
}

