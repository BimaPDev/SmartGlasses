/* FUN_14071ea8 @ 0x14071ea8 */

int FUN_14071ea8(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_14072014();
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x9d);
    if (cVar1 == '\x01') {
      uVar3 = param_2[1];
      uVar5 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(param_1 + 0x7d) = *param_2;
      *(undefined4 *)(param_1 + 0x81) = uVar3;
      *(undefined4 *)(param_1 + 0x85) = uVar5;
      *(undefined4 *)(param_1 + 0x89) = uVar4;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      *(undefined1 *)(param_1 + 0x9d) = 2;
      FUN_140721e4(param_1,param_1 + 0x38,param_1 + 0x48,0x35);
      return 0;
    }
    if (cVar1 == '\x02') {
      uVar5 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(param_1 + 0x8d) = *param_2;
      *(undefined4 *)(param_1 + 0x91) = uVar5;
      *(undefined4 *)(param_1 + 0x95) = uVar3;
      *(undefined4 *)(param_1 + 0x99) = uVar4;
      (**(code **)(param_1 + 0x34))(0,param_1 + 0x7d,*(undefined4 *)(param_1 + 0x14));
      return iVar2;
    }
    if (cVar1 == '\0') {
      uVar3 = param_2[1];
      uVar5 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(param_1 + 0x38) = *param_2;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      *(undefined4 *)(param_1 + 0x40) = uVar5;
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x9d) = 1;
      FUN_140721e4(param_1,param_1 + 0x38,param_1 + 0x48,0x35);
      return 0;
    }
  }
  return 0;
}

