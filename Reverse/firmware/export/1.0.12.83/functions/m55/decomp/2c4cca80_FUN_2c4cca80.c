/* FUN_2c4cca80 @ 0x2c4cca80 */

void FUN_2c4cca80(int param_1,int param_2,undefined2 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_2c;
  
  cVar3 = *(char *)(param_2 + 0xb3);
  iVar6 = param_4 >> 3;
  iVar4 = iVar6;
  if (cVar3 == '\x02') {
    cVar3 = *(char *)(param_2 + 0xb2);
    uVar8 = 8;
    local_2c = iVar6;
  }
  else if (cVar3 == '\x03') {
    cVar3 = *(char *)(param_2 + 0xb2);
    uVar8 = 1;
    iVar6 = param_4;
    local_2c = param_4;
  }
  else {
    iVar4 = param_4;
    if (cVar3 == '\x01') {
      cVar3 = *(char *)(param_2 + 0xb2);
      uVar8 = 1;
      local_2c = param_4;
    }
    else {
      cVar3 = *(char *)(param_2 + 0xb2);
      iVar6 = param_4;
      if (cVar3 == '\x02') {
        iVar6 = param_4 - (param_4 * 3 >> 2);
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar8 = 1;
        iVar4 = iVar6;
        local_2c = param_4;
      }
      else {
        uVar8 = 1;
        local_2c = param_4;
      }
    }
  }
  piVar7 = (int *)**(undefined4 **)(param_2 + 200);
  uVar5 = *(undefined4 *)(param_2 + 0x94);
  uVar1 = FUN_2c4d7340(iVar4,cVar3);
  uVar2 = FUN_2c4d7340(iVar6,*(undefined1 *)(param_2 + 0xb2));
  FUN_2c4d9604(param_1 + 4,piVar7,uVar5,param_2 + 0x98,uVar8,param_4,local_2c,uVar1,iVar4,uVar2,
               iVar6,0,*(int *)(param_2 + 0xcc) != 0);
  if (0 < param_4 >> 2) {
    iVar6 = 0;
    do {
      iVar4 = *piVar7;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x3fff;
      }
      uVar8 = SignedSaturate(iVar4 >> 0xe,0xf);
      SignedDoesSaturate(iVar4 >> 0xe,0xf);
      *param_3 = (short)uVar8;
      iVar4 = piVar7[1];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x3fff;
      }
      uVar8 = SignedSaturate(iVar4 >> 0xe,0xf);
      SignedDoesSaturate(iVar4 >> 0xe,0xf);
      param_3[1] = (short)uVar8;
      iVar4 = piVar7[2];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x3fff;
      }
      uVar8 = SignedSaturate(iVar4 >> 0xe,0xf);
      SignedDoesSaturate(iVar4 >> 0xe,0xf);
      param_3[2] = (short)uVar8;
      iVar4 = piVar7[3];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x3fff;
      }
      uVar8 = SignedSaturate(iVar4 >> 0xe,0xf);
      SignedDoesSaturate(iVar4 >> 0xe,0xf);
      iVar6 = iVar6 + 1;
      param_3[3] = (short)uVar8;
      piVar7 = piVar7 + 4;
      param_3 = param_3 + 4;
    } while (iVar6 != param_4 >> 2);
  }
  return;
}

