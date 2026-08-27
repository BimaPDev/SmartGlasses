/* FUN_14049358 @ 0x14049358 */

undefined1 FUN_14049358(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 uVar7;
  uint uVar8;
  
  FUN_14051974();
  iVar5 = FUN_1404a1b4();
  bVar1 = *(byte *)(iVar5 + 0xd8);
  uVar8 = (uint)bVar1;
  cVar2 = *(char *)(iVar5 + 0xd9);
  cVar3 = *(char *)(iVar5 + 0xdb);
  cVar4 = *(char *)(iVar5 + 0xda);
  FUN_1404a648();
  pbVar6 = DAT_1404942c;
  if (uVar8 == 0) {
    if (cVar2 == '\0') {
      iVar5 = FUN_14098328(*(undefined4 *)(iVar5 + 0xd4));
      pbVar6 = DAT_1404942c;
      if (iVar5 != 0) {
        uVar7 = 0;
        if (*DAT_1404942c == 1) {
          uVar7 = 4;
        }
        goto LAB_1404938a;
      }
      if (*DAT_14049430 == 1) {
        if (cVar4 == '\0') {
          uVar7 = 4;
          *DAT_14049430 = bVar1;
          goto LAB_1404938a;
        }
      }
      else {
        uVar7 = 0;
        if (*DAT_14049430 == 0 && cVar4 == '\0') goto LAB_1404938a;
      }
    }
    else if (cVar2 == '\x01') {
      if (*DAT_1404942c == 1) {
        uVar7 = 0x13;
      }
      else if (cVar3 == '\x01') {
        uVar7 = 6;
      }
      else {
        *DAT_14049430 = 1;
        uVar7 = 3;
      }
      goto LAB_1404938a;
    }
  }
  else if (uVar8 == 1) {
    if (cVar2 == '\0') {
      *DAT_1404942c = bVar1;
      return 1;
    }
    if ((cVar2 == '\x01') && (cVar3 == '\0')) {
      uVar7 = 5;
      goto LAB_1404938a;
    }
  }
  else {
    if (cVar2 == '\0') {
      *DAT_1404942c = bVar1;
      return 2;
    }
    if (((uVar8 - 2 < 2) && (cVar2 == '\x01')) && (cVar3 == '\x02')) {
      uVar7 = 0x14;
      goto LAB_1404938a;
    }
  }
  uVar7 = 0x15;
  pbVar6 = DAT_1404942c;
LAB_1404938a:
  *pbVar6 = bVar1;
  return uVar7;
}

