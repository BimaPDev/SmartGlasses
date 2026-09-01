/* FUN_100c4cc8 @ 0x100c4cc8 */

void FUN_100c4cc8(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    pcVar6 = DAT_100c4d4c + 0x10;
    pcVar5 = DAT_100c4d4c;
    pcVar7 = param_2;
    do {
      uVar3 = *(undefined4 *)pcVar5;
      uVar4 = *(undefined4 *)(pcVar5 + 4);
      pcVar5 = pcVar5 + 8;
      *(undefined4 *)pcVar7 = uVar3;
      *(undefined4 *)(pcVar7 + 4) = uVar4;
      pcVar7 = pcVar7 + 8;
    } while (pcVar5 != pcVar6);
    uVar3 = *(undefined4 *)(param_1 + 4);
    *pcVar7 = *pcVar5;
    param_2[0xd] = (char)uVar3;
    param_2[0xf] = (char)((uint)uVar3 >> 0x10);
    param_2[0xe] = (char)((uint)uVar3 >> 8);
    param_2[0x10] = (char)((uint)uVar3 >> 0x18);
  }
  else if (cVar1 == '\x02') {
    pcVar5 = param_1 + 0x10;
    do {
      uVar3 = *(undefined4 *)param_1;
      uVar4 = *(undefined4 *)(param_1 + 4);
      param_1 = param_1 + 8;
      *(undefined4 *)param_2 = uVar3;
      *(undefined4 *)(param_2 + 4) = uVar4;
      param_2 = param_2 + 8;
    } while (param_1 != pcVar5);
    *param_2 = *param_1;
  }
  else if (cVar1 == '\0') {
    pcVar6 = DAT_100c4d4c + 0x10;
    pcVar5 = DAT_100c4d4c;
    pcVar7 = param_2;
    do {
      uVar3 = *(undefined4 *)pcVar5;
      uVar4 = *(undefined4 *)(pcVar5 + 4);
      pcVar5 = pcVar5 + 8;
      *(undefined4 *)pcVar7 = uVar3;
      *(undefined4 *)(pcVar7 + 4) = uVar4;
      pcVar7 = pcVar7 + 8;
    } while (pcVar5 != pcVar6);
    uVar2 = *(undefined2 *)(param_1 + 2);
    *pcVar7 = *pcVar5;
    param_2[0xd] = (char)uVar2;
    param_2[0xe] = (char)((ushort)uVar2 >> 8);
  }
  return;
}

