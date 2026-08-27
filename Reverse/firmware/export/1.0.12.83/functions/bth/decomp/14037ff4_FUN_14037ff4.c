/* FUN_14037ff4 @ 0x14037ff4 */

void FUN_14037ff4(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (undefined1 *)0x0) goto LAB_14038102;
  FUN_14037fa8(*param_1,param_1[1]);
  iVar3 = DAT_14038244;
  *(uint *)(DAT_14038244 + 0xc8c) =
       *(uint *)(DAT_14038244 + 0xc8c) & 0xfffffffe | (uint)(byte)param_1[4];
  cVar1 = param_1[6];
  if (cVar1 == '\0') {
    *(uint *)(iVar3 + 0xc8c) = *(uint *)(iVar3 + 0xc8c) & 0xefffffff;
    cVar1 = param_1[6];
  }
  else if (cVar1 == '\x01') {
    *(uint *)(iVar3 + 0xc8c) = *(uint *)(iVar3 + 0xc8c) | 0x10000000;
    cVar1 = param_1[6];
  }
  FUN_14037ed8(cVar1);
  iVar3 = DAT_14038244;
  if (param_1[7] == '\0') {
    *(uint *)(DAT_14038244 + 0xc90) = *(uint *)(DAT_14038244 + 0xc90) & 0x7fffffff;
  }
  else {
    *(uint *)(DAT_14038244 + 0xc90) = *(uint *)(DAT_14038244 + 0xc90) | 0x80000000;
    iVar5 = *(int *)(param_1 + 0xc);
    if ((iVar5 == 0) || (*(int *)(param_1 + 8) == 0)) {
      FUN_1402a6e8(4,0x3d6,DAT_14038254,DAT_14038250,DAT_1403824c);
    }
    else if (param_1[6] == '\0') {
      *(int *)(iVar3 + 0xcc8) = iVar5;
    }
    else if (param_1[6] == '\x01') {
      *(int *)(iVar3 + 0xcc8) = *(int *)(param_1 + 8);
      *(int *)(iVar3 + 0xcc4) = iVar5;
    }
  }
  iVar3 = DAT_14038248;
  *(uint *)(DAT_14038244 + 0xc90) =
       ((byte)param_1[5] & 0x7f) << 0x18 | *(uint *)(DAT_14038244 + 0xc90) & 0x80ffffff;
  iVar5 = DAT_14038248;
  if (param_1[0x10] == '\0') {
    *(uint *)(iVar3 + 0x228) = *(uint *)(iVar3 + 0x228) & 0xfeffffff;
    if (param_1[0x10] != '\0') goto LAB_1403808a;
LAB_1403815a:
    iVar3 = DAT_14038244;
    *(uint *)(iVar5 + 0x368) =
         (uint)(byte)(param_1[0x12] << 4) | *(uint *)(iVar5 + 0x368) & 0xffffff0f;
    if (param_1[0x14] == '\0') goto LAB_140380b4;
LAB_14038182:
    *(uint *)(iVar3 + 0xc18) = *(uint *)(iVar3 + 0xc18) | 0x10000;
    if (param_1[0x15] == '\0') goto LAB_140380c6;
LAB_14038194:
    iVar3 = DAT_14038244;
    *(uint *)(DAT_14038244 + 0xc80) = *(uint *)(DAT_14038244 + 0xc80) | 0x4000;
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar3 + 0xc40) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar3 + 0xc44) = uVar2;
    *(uint *)(iVar3 + 0xc48) = uVar4 | *(uint *)(iVar3 + 0xc48);
    if (param_1[0x24] == '\0') goto LAB_140380dc;
LAB_140381c2:
    iVar3 = DAT_14038244;
    *(uint *)(DAT_14038244 + 0xc18) = *(uint *)(DAT_14038244 + 0xc18) | 0x1000000;
    *(uint *)(iVar3 + 0xc90) = *(uint *)(iVar3 + 0xc90) & 0x80ffffff | 0x66000000;
    cVar1 = param_1[0x25];
  }
  else {
    *(uint *)(iVar3 + 0x228) = *(uint *)(iVar3 + 0x228) | 0x1000000;
    if (param_1[0x10] == '\0') goto LAB_1403815a;
LAB_1403808a:
    iVar3 = DAT_14038244;
    *(uint *)(iVar5 + 0x228) =
         ((byte)param_1[0x11] & 0x7f) << 0x10 | *(uint *)(iVar5 + 0x228) & 0xff80ffff;
    if (param_1[0x14] != '\0') goto LAB_14038182;
LAB_140380b4:
    *(uint *)(iVar3 + 0xc18) = *(uint *)(iVar3 + 0xc18) & 0xfffeffff;
    if (param_1[0x15] != '\0') goto LAB_14038194;
LAB_140380c6:
    *(uint *)(DAT_14038244 + 0xc80) = *(uint *)(DAT_14038244 + 0xc80) & 0xffffbfff;
    if (param_1[0x24] != '\0') goto LAB_140381c2;
LAB_140380dc:
    *(uint *)(DAT_14038244 + 0xc18) = *(uint *)(DAT_14038244 + 0xc18) & 0xfeffffff;
    cVar1 = param_1[0x25];
  }
  if (cVar1 == '\0') {
    *(uint *)(DAT_14038244 + 0xc18) = *(uint *)(DAT_14038244 + 0xc18) & 0xfdffffff;
  }
  else {
    FUN_14037e64(param_1[0x26]);
  }
LAB_14038102:
  iVar3 = DAT_14038244;
  *(uint *)(DAT_14038244 + 0xc8c) = *(uint *)(DAT_14038244 + 0xc8c) | 0x20000;
  *(uint *)(iVar3 + 0xc10) = *(uint *)(iVar3 + 0xc10) & 0xffe0ffff | 0x160000;
  return;
}

