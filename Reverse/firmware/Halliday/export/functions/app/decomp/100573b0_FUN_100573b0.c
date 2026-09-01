/* FUN_100573b0 @ 0x100573b0 */

undefined4 * FUN_100573b0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_100573f0;
  pcVar2 = DAT_100573ec;
  cVar1 = *DAT_100573ec;
  *(undefined1 *)DAT_100573f0 = 0;
  if (cVar1 != '\0') {
    FUN_100571b8();
    *pcVar2 = '\0';
    iVar4 = FUN_10057648(0);
    if ((iVar4 == 0) && (iVar4 = FUN_10057648(1), iVar4 == 0)) {
      *(undefined1 *)puVar3 = 4;
    }
    else {
      FUN_1005be90();
    }
  }
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  return param_1;
}

