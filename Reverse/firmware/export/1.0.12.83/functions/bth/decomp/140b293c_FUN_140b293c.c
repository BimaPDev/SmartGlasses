/* FUN_140b293c @ 0x140b293c */

undefined4 FUN_140b293c(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  puVar1 = (uint *)FUN_1409f464();
  if ((puVar1 == (uint *)0x0) || (*puVar1 == 0)) {
    uVar3 = 0x128;
    uVar7 = DAT_140b29d8;
  }
  else {
    uVar5 = 0;
    do {
      if (*(char *)((int)puVar1 + uVar5 * 0x72 + 0x8a) == '\0') {
        if (uVar5 != 5) {
          pcVar2 = (char *)((int)puVar1 + uVar5 * 0x72 + 0x6c);
          uVar5 = 0;
          pcVar6 = pcVar2;
          goto LAB_140b2980;
        }
        break;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *puVar1);
    uVar3 = 0x134;
    uVar7 = DAT_140b29e8;
  }
  FUN_1402a6e8(4,uVar3,DAT_140b29e0,DAT_140b29dc,uVar7);
  return 0;
  while (uVar5 = uVar5 + 1 & 0xff, pcVar6 = pcVar6 + 1, uVar5 != 0x1e) {
LAB_140b2980:
    if (*pcVar6 == '\0') break;
  }
  if ((uVar5 == param_2) && (iVar4 = FUN_140db784(pcVar2,param_1), iVar4 == 0)) {
    FUN_1402a6e8(4,0x142,DAT_140b29e0,DAT_140b29dc,DAT_140b29e4);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

