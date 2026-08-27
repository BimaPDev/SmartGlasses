/* FUN_2c0095f4 @ 0x2c0095f4 */

/* WARNING: Removing unreachable block (ram,0x2c009100) */
/* WARNING: Removing unreachable block (ram,0x2c006a08) */
/* WARNING: Removing unreachable block (ram,0x2c006a0a) */
/* WARNING: Removing unreachable block (ram,0x2c006a0e) */
/* WARNING: Removing unreachable block (ram,0x2c006a12) */
/* WARNING: Removing unreachable block (ram,0x2c006a1a) */
/* WARNING: Removing unreachable block (ram,0x2c006a1c) */
/* WARNING: Removing unreachable block (ram,0x2c006a20) */
/* WARNING: Removing unreachable block (ram,0x2c006a44) */
/* WARNING: Removing unreachable block (ram,0x2c006a4c) */
/* WARNING: Removing unreachable block (ram,0x2c006a48) */
/* WARNING: Removing unreachable block (ram,0x2c006a22) */
/* WARNING: Removing unreachable block (ram,0x2c006a32) */
/* WARNING: Removing unreachable block (ram,0x2c006a34) */
/* WARNING: Removing unreachable block (ram,0x2c006a3c) */
/* WARNING: Removing unreachable block (ram,0x2c006a40) */
/* WARNING: Removing unreachable block (ram,0x2c0069a8) */
/* WARNING: Removing unreachable block (ram,0x2c0069aa) */
/* WARNING: Removing unreachable block (ram,0x2c0069ae) */
/* WARNING: Removing unreachable block (ram,0x2c0069b2) */
/* WARNING: Removing unreachable block (ram,0x2c0069ba) */
/* WARNING: Removing unreachable block (ram,0x2c0069bc) */
/* WARNING: Removing unreachable block (ram,0x2c0069c0) */
/* WARNING: Removing unreachable block (ram,0x2c0069e4) */
/* WARNING: Removing unreachable block (ram,0x2c0069ec) */
/* WARNING: Removing unreachable block (ram,0x2c0069e8) */
/* WARNING: Removing unreachable block (ram,0x2c0069c2) */
/* WARNING: Removing unreachable block (ram,0x2c0069d2) */
/* WARNING: Removing unreachable block (ram,0x2c0069d4) */
/* WARNING: Removing unreachable block (ram,0x2c0069dc) */
/* WARNING: Removing unreachable block (ram,0x2c0069e0) */
/* WARNING: Removing unreachable block (ram,0x2c00846c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c0095f4(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  FUN_2c00907c();
  pcVar4 = DAT_2c009124;
  iVar5 = *DAT_2c009120;
  *(uint *)(iVar5 + 4) = (uint)*(ushort *)(param_1 + 8);
  *(uint *)(iVar5 + 0x10) = (uint)*(byte *)(param_1 + 10);
  *(uint *)(iVar5 + 0x24) = (uint)*(byte *)(param_1 + 0xb);
  cVar1 = *(char *)(param_1 + 0x10);
  if ((*pcVar4 != cVar1) && (*pcVar4 = cVar1, puVar3 = DAT_2c008484, cVar1 != '\x03')) {
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c008484 = 0x2c00843a;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (cVar1 == '\x02') {
      _DAT_500000a8 = _DAT_500000a8 | 0x2000000;
    }
    else {
      _DAT_500000a8 = _DAT_500000a8 & 0xfdffffff;
    }
    if (iVar5 == 0) {
      *DAT_2c008484 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
    return '\0';
  }
  return cVar1;
}

