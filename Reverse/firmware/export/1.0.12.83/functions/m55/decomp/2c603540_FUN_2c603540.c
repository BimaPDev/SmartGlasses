/* FUN_2c603540 @ 0x2c603540 */

void FUN_2c603540(int param_1,uint param_2,int param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  FUN_2c607df0();
  param_2 = param_2 & 0xff0000;
  uVar3 = FUN_2c62b1c8(param_3);
  iVar4 = FUN_2c62b1c8(param_3);
  uVar3 = uVar3 & 4;
  uVar5 = FUN_2c62b1c8(param_3);
  uVar6 = FUN_2c62b1c8(param_3);
  if (uVar3 == 0) {
    if ((param_2 == 0xf0000) || (param_2 == 0)) {
      if (param_3 == 0xffff) goto LAB_2c603664;
      goto LAB_2c6035f2;
    }
  }
  else if ((param_2 == 0xf0000) || (param_2 == 0)) {
    FUN_2c602340(param_1,0x2a,0);
    FUN_2c607248(param_1);
LAB_2c603664:
    iVar7 = FUN_2c6041d4(param_1);
    if (iVar7 != 0) {
      FUN_2c607248();
    }
LAB_2c6035f2:
    if ((uVar6 & 0x10) != 0) {
      sVar2 = FUN_2c6033b4(param_1,0,0x6d);
      if ((sVar2 == 0) && (sVar2 = FUN_2c6033b4(param_1,0,0x6c), sVar2 == 0x100)) {
        cVar1 = FUN_2c6033b4(param_1,0,0x60);
        if (cVar1 == -1) {
          cVar1 = FUN_2c6033b4(param_1,0,0x67);
          iVar7 = *(int *)(param_1 + 8);
          if (cVar1 == '\0') {
            cVar1 = '\0';
            if (iVar7 != 0) goto LAB_2c60368c;
            goto LAB_2c6035b2;
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 8);
        }
        if (iVar7 == 0) {
          cVar1 = '\x01';
LAB_2c6036b2:
          FUN_2c606bc8(param_1);
          *(byte *)(*(int *)(param_1 + 8) + 0x1a) =
               *(byte *)(*(int *)(param_1 + 8) + 0x1a) & 0x3f | cVar1 << 6;
          goto LAB_2c6035b2;
        }
        cVar1 = '\x01';
      }
      else {
        iVar7 = *(int *)(param_1 + 8);
        if (iVar7 == 0) {
          cVar1 = '\x02';
          goto LAB_2c6036b2;
        }
        cVar1 = '\x02';
      }
LAB_2c60368c:
      *(byte *)(iVar7 + 0x1a) = *(byte *)(iVar7 + 0x1a) & 0x3f | cVar1 << 6;
    }
  }
  else {
    sVar2 = FUN_2c6033b4(param_1,param_2 == 0,4);
    if ((sVar2 == 0x27d1) || (sVar2 = FUN_2c6033b4(param_1,param_2 == 0,1), sVar2 == 0x27d1)) {
      FUN_2c602340(param_1,0x2a,0);
      FUN_2c607248(param_1);
    }
  }
LAB_2c6035b2:
  if ((param_3 == 0xffff) || (iVar4 << 0x1e < 0)) {
    FUN_2c600bac(param_1);
    FUN_2c607df0(param_1);
    uVar3 = uVar5 & 1;
    if (param_3 == 0xffff) goto LAB_2c6035d0;
  }
  else {
    FUN_2c607df0();
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  if (uVar3 == 0) {
    return;
  }
LAB_2c6035d0:
  if (param_2 == 0x10000) {
    return;
  }
  FUN_2c603134(param_1);
  return;
}

