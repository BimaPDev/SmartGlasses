/* FUN_2c499dbc @ 0x2c499dbc */

void FUN_2c499dbc(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar2 = DAT_2c499e28;
  iVar1 = DAT_2c499e24;
  iVar4 = *(int *)(DAT_2c499e24 + 0x4b018);
  if (iVar4 == DAT_2c499e24) {
    FUN_2c498538(iVar4,DAT_2c499e28);
    *(undefined4 *)(iVar1 + 0x4b018) = uVar2;
    FUN_2c498000(0,*(undefined2 *)(iVar4 + 0x25802),iVar4,(uint)*(ushort *)(iVar4 + 0x25806) * 0x140
                );
  }
  else {
    FUN_2c498538(DAT_2c499e28,DAT_2c499e24);
    uVar2 = DAT_2c499e28;
    *(int *)(iVar1 + 0x4b018) = iVar1;
    FUN_2c498000(0,*(undefined2 *)(iVar1 + 0x4b00e),uVar2,(uint)*(ushort *)(iVar1 + 0x4b012) * 0x140
                );
  }
  pcVar3 = LAB_2c499e2c;
  if (*LAB_2c499e2c == '\0') {
    return;
  }
  FUN_2c499b04(*DAT_2c499e30);
  *pcVar3 = '\0';
  return;
}

