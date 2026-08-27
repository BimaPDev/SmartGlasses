/* FUN_14086384 @ 0x14086384 */

undefined4 FUN_14086384(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14085c48();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0x4b) - 3 < 2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

