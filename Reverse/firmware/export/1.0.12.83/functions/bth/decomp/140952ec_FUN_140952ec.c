/* FUN_140952ec @ 0x140952ec */

undefined2 FUN_140952ec(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14095324;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_14095324 = 0x140952fa;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar3 = FUN_14085c48();
  if (iVar4 == 0) {
    *DAT_14095324 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  if (iVar3 != 0) {
    return *(undefined2 *)(iVar3 + 0x1c);
  }
  return 0xffff;
}

