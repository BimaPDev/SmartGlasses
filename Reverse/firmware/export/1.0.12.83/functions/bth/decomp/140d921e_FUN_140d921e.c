/* FUN_140d921e @ 0x140d921e */

float FUN_140d921e(void)

{
  uint uVar1;
  float fVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = FUN_140d9b00(&local_10);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_140d9d74(local_10,local_c);
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_140da4f4(local_10,local_c,1);
    fVar2 = -fVar2;
  }
  else if (uVar1 == 0) {
    fVar2 = (float)FUN_140da4f4(local_10,local_c,1);
  }
  else {
    fVar2 = (float)FUN_140d9d74(local_10,local_c);
    fVar2 = -fVar2;
  }
  return fVar2;
}

