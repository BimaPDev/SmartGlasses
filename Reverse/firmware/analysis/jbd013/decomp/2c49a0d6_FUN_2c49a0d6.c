/* FUN_2c49a0d6 @ 0x2c49a0d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49a0d6(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *in_r3;
  undefined4 unaff_r4;
  int iVar4;
  
  iVar3 = FUN_2c6471b4(*in_r3);
  iVar4 = _LAB_2c49a134;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x467,_LAB_2c49a148,_LAB_2c49a144,_LAB_2c49a140,_LAB_2c49a13c,iVar3);
  }
  if (*(char *)(_LAB_2c49a134 + 0x45) != '\0') {
    FUN_2c499eec(*(undefined1 *)(_LAB_2c49a134 + 0x46));
    *(undefined1 *)(iVar4 + 0x45) = 0;
  }
  uVar1 = DAT_2c499e28;
  iVar3 = DAT_2c499e24;
  if ((*(char *)(_LAB_2c49a138 + 0x808) == '\0') && (*(char *)(iVar4 + 0x14) == '\0')) {
    return;
  }
  iVar4 = *(int *)(DAT_2c499e24 + 0x4b018);
  if (iVar4 == DAT_2c499e24) {
    FUN_2c498538(iVar4,DAT_2c499e28);
    *(undefined4 *)(iVar3 + 0x4b018) = uVar1;
    FUN_2c498000(0,*(undefined2 *)(iVar4 + 0x25802),iVar4,(uint)*(ushort *)(iVar4 + 0x25806) * 0x140
                );
  }
  else {
    FUN_2c498538(DAT_2c499e28,DAT_2c499e24);
    uVar1 = DAT_2c499e28;
    *(int *)(iVar3 + 0x4b018) = iVar3;
    FUN_2c498000(0,*(undefined2 *)(iVar3 + 0x4b00e),uVar1,(uint)*(ushort *)(iVar3 + 0x4b012) * 0x140
                 ,unaff_r4);
  }
  pcVar2 = LAB_2c499e2c;
  if (*LAB_2c499e2c == '\0') {
    return;
  }
  FUN_2c499b04(*DAT_2c499e30);
  *pcVar2 = '\0';
  return;
}

