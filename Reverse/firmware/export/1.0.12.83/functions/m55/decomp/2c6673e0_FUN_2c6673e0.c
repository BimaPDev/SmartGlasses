/* FUN_2c6673e0 @ 0x2c6673e0 */

undefined4 FUN_2c6673e0(void)

{
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 uVar1;
  double in_d0;
  uint extraout_s1;
  undefined4 extraout_s1_00;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = (uint)((ulonglong)in_d0 >> 0x20);
  uStack_1c = uStack_1c & 0x7fffffff;
  if (DAT_2c667680 < (int)uStack_1c) {
    local_20 = SUB84(in_d0,0);
    if (local_20 == 0 && DAT_2c667684 + uStack_1c == 0) {
      coprocessor_function2(0xb,3,0,in_cr0,in_cr0,in_cr7);
      return (int)DAT_2c667610;
    }
    return SUB84((in_d0 - in_d0) / (in_d0 - in_d0),0);
  }
  if (DAT_2c667688 < (int)uStack_1c) {
    if (-1 < (longlong)in_d0) {
      dVar3 = (1.0 - in_d0) * 0.5;
      uVar1 = FUN_2c667bcc(SUB84(dVar3,0));
      dVar2 = (double)((ulonglong)extraout_s1 << 0x20);
      dVar2 = dVar2 + (dVar3 + -dVar2 * dVar2) / ((double)CONCAT44(extraout_s1,uVar1) + dVar2) +
                      (double)CONCAT44(extraout_s1,uVar1) *
                      (((DAT_2c667668 +
                        (DAT_2c667650 +
                        (DAT_2c667648 +
                        (DAT_2c667630 + (DAT_2c667628 + dVar3 * DAT_2c667620) * dVar3) * dVar3) *
                        dVar3) * dVar3) * dVar3) /
                      ((DAT_2c667660 +
                       (DAT_2c667658 + (DAT_2c667640 + dVar3 * DAT_2c667638) * dVar3) * dVar3) *
                       dVar3 + 1.0));
      return SUB84(dVar2 + dVar2,0);
    }
    dVar3 = (in_d0 + 1.0) * 0.5;
    dVar2 = DAT_2c667660 + (DAT_2c667658 + (DAT_2c667640 + dVar3 * DAT_2c667638) * dVar3) * dVar3;
    dVar4 = DAT_2c667668 +
            (DAT_2c667650 +
            (DAT_2c667648 + (DAT_2c667630 + (DAT_2c667628 + dVar3 * DAT_2c667620) * dVar3) * dVar3)
            * dVar3) * dVar3;
    uVar1 = FUN_2c667bcc(SUB84(dVar3,0));
    return SUB84(DAT_2c667608 +
                 -(DAT_2c667678 +
                   (double)CONCAT44(extraout_s1_00,uVar1) *
                   ((dVar4 * dVar3) / (dVar2 * dVar3 + 1.0)) +
                  (double)CONCAT44(extraout_s1_00,uVar1)) * 2.0,0);
  }
  if ((int)uStack_1c <= DAT_2c66768c) {
    return SUB84(DAT_2c667618,0);
  }
  dVar2 = in_d0 * in_d0;
  return SUB84(DAT_2c667618 -
               (in_d0 - (DAT_2c667670 +
                        -in_d0 * (((DAT_2c667668 +
                                   (DAT_2c667650 +
                                   (DAT_2c667648 +
                                   (DAT_2c667630 + (DAT_2c667628 + dVar2 * DAT_2c667620) * dVar2) *
                                   dVar2) * dVar2) * dVar2) * dVar2) /
                                 ((DAT_2c667660 +
                                  (DAT_2c667658 + (DAT_2c667640 + dVar2 * DAT_2c667638) * dVar2) *
                                  dVar2) * dVar2 + 1.0)))),0);
}

