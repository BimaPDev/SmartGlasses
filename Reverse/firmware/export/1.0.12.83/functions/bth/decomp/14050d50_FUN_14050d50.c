/* FUN_14050d50 @ 0x14050d50 */

void FUN_14050d50(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  iVar1 = DAT_14050dc8;
  if (*(int *)(DAT_14050dc8 + 0x134) == 0) {
    uVar2 = FUN_140e52f8(DAT_14050ddc,0);
    *(undefined4 *)(iVar1 + 0x134) = uVar2;
  }
  if ((*(byte *)(iVar1 + 0x138) != 0xff) && (*(byte *)(iVar1 + 0x138) != param_1)) {
    FUN_1402a6e8(4,0x337,DAT_14050dd8,DAT_14050dd4,DAT_14050dd0,param_1);
    *DAT_14050dcc = '\0';
    return;
  }
  if (param_2 == 0) {
    cVar3 = *DAT_14050dcc + '\x01';
  }
  else {
    cVar3 = '\x01';
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x134);
  *DAT_14050dcc = cVar3;
  *(char *)(iVar1 + 0x138) = (char)param_1;
  FUN_140e5718(uVar2);
  FUN_140e5378(*(undefined4 *)(iVar1 + 0x134),1000);
  return;
}

