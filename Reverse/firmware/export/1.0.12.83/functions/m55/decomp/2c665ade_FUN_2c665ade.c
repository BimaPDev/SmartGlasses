/* FUN_2c665ade @ 0x2c665ade */

void FUN_2c665ade(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  *param_2 = 0x25;
  if ((int)(uVar5 << 0x14) < 0) {
    puVar1 = param_2 + 2;
    param_2[1] = 0x2b;
  }
  else {
    puVar1 = param_2 + 1;
  }
  uVar4 = uVar5 & 0x104;
  puVar2 = puVar1;
  if ((int)(uVar5 << 0x15) < 0) {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x23;
  }
  if (uVar4 == 0x104) {
    if (param_3 != 0) goto LAB_2c665b14;
LAB_2c665b40:
    if ((uVar5 & 0x4000) == 0) {
      uVar3 = 0x61;
    }
    else {
      uVar3 = 0x41;
    }
    *puVar2 = uVar3;
  }
  else {
    puVar1 = puVar2 + 2;
    *puVar2 = 0x2e;
    puVar2[1] = 0x2a;
    puVar2 = puVar1;
    if (param_3 != 0) {
LAB_2c665b14:
      puVar1 = puVar2 + 1;
      *puVar2 = (char)param_3;
    }
    puVar2 = puVar1;
    if (uVar4 == 4) {
      uVar3 = 0x66;
    }
    else if (uVar4 == 0x100) {
      if ((uVar5 & 0x4000) == 0) {
        uVar3 = 0x65;
      }
      else {
        uVar3 = 0x45;
      }
    }
    else {
      if (uVar4 == 0x104) goto LAB_2c665b40;
      if ((uVar5 & 0x4000) == 0) {
        uVar3 = 0x67;
      }
      else {
        uVar3 = 0x47;
      }
    }
    *puVar1 = uVar3;
  }
  puVar2[1] = 0;
  return;
}

