/* FUN_10019594 @ 0x10019594 */

void FUN_10019594(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r2;
  undefined1 *extraout_r3;
  undefined1 *puVar4;
  undefined1 auStack_64 [6];
  byte abStack_5e [74];
  int local_14;
  
  local_14 = *DAT_10019630;
  FUN_1011ea48(auStack_64,0,0x50,0);
  iVar2 = FUN_100bb038(auStack_64,2);
  iVar3 = 0x28;
  if (1 < iVar2) {
    iVar2 = 2;
  }
  puVar4 = auStack_64 + iVar2 * 0x28;
  do {
    if (iVar2 != 0) goto LAB_100195da;
    bVar1 = 0;
    do {
      if (*DAT_10019630 == local_14) {
        return;
      }
      FUN_1013cdc0(bVar1);
      iVar3 = extraout_r1;
      iVar2 = extraout_r2;
      puVar4 = extraout_r3;
LAB_100195da:
      iVar2 = iVar2 + -1;
    } while ((((*param_1 == puVar4[-0x28]) && (param_1[1] == puVar4[-0x27])) &&
             (param_1[2] == puVar4[-0x26])) &&
            (((param_1[3] == puVar4[-0x25] && (param_1[4] == puVar4[-0x24])) &&
             ((param_1[5] == puVar4[-0x23] &&
              (bVar1 = abStack_5e[iVar3 * iVar2] & 1, (abStack_5e[iVar3 * iVar2] & 1) != 0))))));
    puVar4 = puVar4 + -0x28;
  } while( true );
}

