/* FUN_1403d8b4 @ 0x1403d8b4 */

void FUN_1403d8b4(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  
  FUN_1402a6e8(4,0x177,DAT_1403d948,DAT_1403d944,DAT_1403d940,*(undefined1 *)(param_1 + 1));
  FUN_140b06f8(param_1,param_2);
  uVar4 = DAT_1403d950;
  uVar3 = DAT_1403d94c;
  uVar2 = DAT_1403d948;
  uVar1 = DAT_1403d944;
  if (*(char *)(param_1 + 1) == '\0') {
    pcVar6 = (char *)0x1;
  }
  else {
    pcVar5 = (char *)(param_1 + 1);
    do {
      pcVar6 = pcVar5 + (1 - param_1);
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
  }
  while (pcVar6 < param_2) {
    uVar7 = (uint)(byte)pcVar6[param_1 + 1];
    pcVar5 = pcVar6 + param_1;
    pcVar6 = pcVar6 + uVar7 + 3;
    FUN_1402a6e8(4,0x185,uVar2,uVar1,uVar3,*pcVar5);
    FUN_1402a9fc(uVar4,1,uVar7,pcVar6 + (param_1 - uVar7));
  }
  return;
}

